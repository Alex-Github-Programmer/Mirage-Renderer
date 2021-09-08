/* Name: fractalFeigenbaumGraph_test.c v0.0.0
 * Date: 2021-09-08
 * Intro: Render Feigenbaum graph. See output at feigenbaumGraph.bmp.
 *		(File is big; *.zip.001~003 on Github.)
 */
#include "fractalFeigenbaumGraph.h"
#include "bmpPalette.h"
const int width = 16384, height = 8192;
int main() {
	fractalFeigenbaumGraph("feigenbaumGraph.bmp", width, height, 256, gradWK256,
		lineTwoPoints(0, 0, width, 1), lineTwoPoints(0, 3.5, height, 4), 256, 1048576);
	return 0;
}
