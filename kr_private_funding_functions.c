#include "kr_private_funding_functions.h"

int
deposit_methods(struct kraken_api **kr_api, const char *asset)
{
	const char* url_asset = "asset=";

	/* set the appropriate optionals for this function */
	(*kr_api)->opt_table[ACLASS].b_flag = TRUE;

	/* create the temporary url */
	(*kr_api)->tmp_query_url = to_url((*kr_api)->tmp_query_url, (*kr_api)->s_uri_private);
	(*kr_api)->tmp_query_url = to_url((*kr_api)->tmp_query_url, (*kr_api)->s_uri_deposit_methods);

	/* start the data string */
	(*kr_api)->s_data = to_url((*kr_api)->s_data, url_asset);

	/* add XXBTZEUR to the string */
	(*kr_api)->s_data = to_url((*kr_api)->s_data, asset);

	query_private(kr_api);

	return 0;
}
