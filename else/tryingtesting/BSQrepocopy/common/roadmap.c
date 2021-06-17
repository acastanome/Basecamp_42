
#include "ft.h"

//1. check if input from argv or stdin

//2. store info in t_map map. in step 3 check instructions are ok. still check there is instructions should be maybe here?

//3. create grid from info in t_map map
map.grid = creategrid(map, WHAT_HERE); //if argv´s pass them. otherwise what? also, free (and elements) at the end

//4. check for invalid maps
if (ft_all_good(map) != 0) //pass it the t_map map and it will write "error map\n" and return 1
	return (1); //or 0? deos it matter when exiting?

//5. go through map and figure out biggest square

//6. print it

//7. free and return

//8. sing Halleluyah, go have a beer. or two.