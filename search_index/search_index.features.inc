<?php
/**
 * @file
 * search_index.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_index_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function search_index_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_library_test'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_library_test",
    "name" : "Library Search Index",
    "index_id" : "library",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true, "fields" : [] },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function search_index_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "database_service",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "field_audience" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" },
        "views" : { "type" : "integer" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['library'] = entity_import('search_api_index', '{
    "name" : "Library Search Index",
    "machine_name" : "library",
    "description" : "Index of library items.",
    "server" : "database_service",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_audience" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_genre" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_medium" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_time_period" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_topics" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_variation" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "commerce_product" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "views" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "media" : "media" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_description" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_description" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_description" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "field_description" : true },
            "file" : "",
            "stopwords" : "a about above across after afterwards again against all almost alone along already also although always am among amongst amoungst amount an and another any anyhow anyone anything anyway anywhere are around as at back be became because become becomes becoming been before beforehand behind being below beside besides between beyond bill both bottom but by call can cannot cant co computer con could couldnt cry de describe detail did do done down due during each eg eight either eleven else elsewhere empty enough etc even ever every everyone everything everywhere except few fifteen fify fill find fire first five for former formerly forty found four from front full further get give go had has hasnt have he hence her here hereafter hereby herein hereupon hers herse\\u201d him himse\\u201d his how however hundred i ie if in inc indeed interest into is it its itse\\u201d keep last latter latterly least less ltd made many may me meanwhile might mill mine more moreover most mostly move much must my myse\\u201d name namely neither never nevertheless next nine no nobody none noone nor not nothing now nowhere of off often on once one only onto or other others otherwise our ours ourselves out over own part per perhaps please put rather re same see seem seemed seeming seems serious several she should show side since sincere six sixty so some somehow someone something sometime sometimes somewhere still such system take ten than that the their them themselves then thence there thereafter thereby therefore therein thereupon these they thick thin third this those though three through throughout thru thus to together too top toward towards twelve twenty two un under until up upon us very via was we well were what whatever when whence whenever where whereafter whereas whereby wherein whereupon wherever whether which while whither who whoever whole whom whose why will with within without would yet you your yours yourself yourselves"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function search_index_default_search_api_server() {
  $items = array();
  $items['database_service'] = entity_import('search_api_server', '{
    "name" : "Database Service",
    "machine_name" : "database_service",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : {
        "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "comment_count" : {
            "table" : "search_api_db_default_node_index",
            "column" : "comment_count",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "views" : {
            "table" : "search_api_db_default_node_index",
            "column" : "views",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_topics" : {
            "table" : "search_api_db_default_node_index_field_topics",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_audience" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_audience",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "library" : {
          "views" : {
            "table" : "search_api_db_library",
            "column" : "views",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_topics" : {
            "table" : "search_api_db_library_field_topics",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_variation" : {
            "table" : "search_api_db_library_field_variation",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_audience" : {
            "table" : "search_api_db_library",
            "column" : "field_audience",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_library",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_library_text_1",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_keywords" : {
            "table" : "search_api_db_library_field_keywords",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_topic" : {
            "table" : "search_api_db_library_field_topic",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_genre" : {
            "table" : "search_api_db_library",
            "column" : "field_genre",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_time_period" : {
            "table" : "search_api_db_library",
            "column" : "field_time_period",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_medium" : {
            "table" : "search_api_db_library",
            "column" : "field_medium",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_library",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_library",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_author" : {
            "table" : "search_api_db_library_field_author",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
