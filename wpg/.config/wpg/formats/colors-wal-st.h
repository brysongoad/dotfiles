const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2c2125", /* black   */
  [1] = "#8abcb9", /* red     */
  [2] = "#de6b6d", /* green   */
  [3] = "#ecc282", /* yellow  */
  [4] = "#a7a1bb", /* blue    */
  [5] = "#e67f9c", /* magenta */
  [6] = "#87b7c5", /* cyan    */
  [7] = "#ecf3f3", /* white   */

  /* 8 bright colors */
  [8]  = "#4c4248",  /* black   */
  [9]  = "#8abcb9",  /* red     */
  [10] = "#de6b6d", /* green   */
  [11] = "#ecc282", /* yellow  */
  [12] = "#a7a1bb", /* blue    */
  [13] = "#e67f9c", /* magenta */
  [14] = "#87b7c5", /* cyan    */
  [15] = "#fcffff", /* white   */

  /* special colors */
  [256] = "#2c2125", /* background */
  [257] = "#fcffff", /* foreground */
  [258] = "#fcffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
