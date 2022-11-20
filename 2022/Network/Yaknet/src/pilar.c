static size_t wall_count = 84;
static float wall_vert[] = {
-1.000000, 0.000000, 0.955559,
-0.955559, 0.000000, -1.000000,
1.000000, 0.000000, -0.955559,
1.000000, 4.000000, -0.955559,
1.000000, 0.000000, 0.955559,
1.000000, 0.000000, -0.955559,
-0.955559, 4.000000, -1.000000,
0.955559, 0.000000, -1.000000,
-0.955559, 0.000000, -1.000000,
1.000000, 4.000000, 0.955559,
0.955559, 4.000000, -1.000000,
-1.000000, 4.000000, -0.955559,
-1.000000, 4.000000, 0.955559,
-1.000000, 0.000000, -0.955559,
-1.000000, 0.000000, 0.955559,
-1.000000, 0.000000, 0.955559,
-0.955559, 4.000000, 1.000000,
-1.000000, 4.000000, 0.955559,
0.955559, 4.000000, -1.000000,
1.000000, 0.000000, -0.955559,
0.955559, 0.000000, -1.000000,
-0.955559, 0.000000, -1.000000,
-1.000000, 4.000000, -0.955559,
-0.955559, 4.000000, -1.000000,
0.955559, 0.000000, 1.000000,
1.000000, 4.000000, 0.955559,
0.955559, 4.000000, 1.000000,
0.955559, 4.000000, 1.000000,
-0.955559, 0.000000, 1.000000,
0.955559, 0.000000, 1.000000,
1.000000, 0.000000, -0.955559,
1.000000, 0.000000, 0.955559,
0.955559, 0.000000, 1.000000,
0.955559, 0.000000, 1.000000,
-0.955559, 0.000000, 1.000000,
-1.000000, 0.000000, 0.955559,
-1.000000, 0.000000, 0.955559,
-1.000000, 0.000000, -0.955559,
-0.955559, 0.000000, -1.000000,
-0.955559, 0.000000, -1.000000,
0.955559, 0.000000, -1.000000,
1.000000, 0.000000, -0.955559,
1.000000, 0.000000, -0.955559,
0.955559, 0.000000, 1.000000,
-1.000000, 0.000000, 0.955559,
1.000000, 4.000000, -0.955559,
1.000000, 4.000000, 0.955559,
1.000000, 0.000000, 0.955559,
-0.955559, 4.000000, -1.000000,
0.955559, 4.000000, -1.000000,
0.955559, 0.000000, -1.000000,
-1.000000, 4.000000, -0.955559,
-1.000000, 4.000000, 0.955559,
-0.955559, 4.000000, 1.000000,
-0.955559, 4.000000, 1.000000,
0.955559, 4.000000, 1.000000,
1.000000, 4.000000, 0.955559,
1.000000, 4.000000, 0.955559,
1.000000, 4.000000, -0.955559,
0.955559, 4.000000, -1.000000,
0.955559, 4.000000, -1.000000,
-0.955559, 4.000000, -1.000000,
-1.000000, 4.000000, -0.955559,
-1.000000, 4.000000, -0.955559,
-0.955559, 4.000000, 1.000000,
1.000000, 4.000000, 0.955559,
-1.000000, 4.000000, 0.955559,
-1.000000, 4.000000, -0.955559,
-1.000000, 0.000000, -0.955559,
-1.000000, 0.000000, 0.955559,
-0.955559, 0.000000, 1.000000,
-0.955559, 4.000000, 1.000000,
0.955559, 4.000000, -1.000000,
1.000000, 4.000000, -0.955559,
1.000000, 0.000000, -0.955559,
-0.955559, 0.000000, -1.000000,
-1.000000, 0.000000, -0.955559,
-1.000000, 4.000000, -0.955559,
0.955559, 0.000000, 1.000000,
1.000000, 0.000000, 0.955559,
1.000000, 4.000000, 0.955559,
0.955559, 4.000000, 1.000000,
-0.955559, 4.000000, 1.000000,
-0.955559, 0.000000, 1.000000,
};
static float wall_norm[] = {
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
1.000000, -0.000000, -0.000000,
1.000000, -0.000000, -0.000000,
1.000000, -0.000000, -0.000000,
-0.000000, -0.000000, -1.000000,
-0.000000, -0.000000, -1.000000,
-0.000000, -0.000000, -1.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-1.000000, -0.000000, -0.000000,
-1.000000, -0.000000, -0.000000,
-1.000000, -0.000000, -0.000000,
-0.707100, -0.000000, 0.707100,
-0.707100, -0.000000, 0.707100,
-0.707100, -0.000000, 0.707100,
0.707100, -0.000000, -0.707100,
0.707100, -0.000000, -0.707100,
0.707100, -0.000000, -0.707100,
-0.707100, -0.000000, -0.707100,
-0.707100, -0.000000, -0.707100,
-0.707100, -0.000000, -0.707100,
0.707100, -0.000000, 0.707100,
0.707100, -0.000000, 0.707100,
0.707100, -0.000000, 0.707100,
-0.000000, -0.000000, 1.000000,
-0.000000, -0.000000, 1.000000,
-0.000000, -0.000000, 1.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
-0.000000, -1.000000, -0.000000,
1.000000, -0.000000, -0.000000,
1.000000, -0.000000, -0.000000,
1.000000, -0.000000, -0.000000,
-0.000000, -0.000000, -1.000000,
-0.000000, -0.000000, -1.000000,
-0.000000, -0.000000, -1.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-0.000000, 1.000000, -0.000000,
-1.000000, -0.000000, -0.000000,
-1.000000, -0.000000, -0.000000,
-1.000000, -0.000000, -0.000000,
-0.707100, -0.000000, 0.707100,
-0.707100, -0.000000, 0.707100,
-0.707100, -0.000000, 0.707100,
0.707100, -0.000000, -0.707100,
0.707100, -0.000000, -0.707100,
0.707100, -0.000000, -0.707100,
-0.707100, -0.000000, -0.707100,
-0.707100, -0.000000, -0.707100,
-0.707100, -0.000000, -0.707100,
0.707100, -0.000000, 0.707100,
0.707100, -0.000000, 0.707100,
0.707100, -0.000000, 0.707100,
-0.000000, -0.000000, 1.000000,
-0.000000, -0.000000, 1.000000,
-0.000000, -0.000000, 1.000000,
};
static float wall_texc[] = {
0.752768, 0.007827,
0.747367, 0.245496,
0.509698, 0.240095,
0.997377, 0.502405,
0.758636, -0.002406,
0.997406, -0.002392,
0.254898, 0.502406,
0.016158, -0.002406,
0.254928, -0.002391,
0.256272, 0.487765,
0.261891, 0.240540,
0.509116, 0.246158,
0.502391, 0.502406,
0.263650, -0.002406,
0.502420, -0.002392,
0.502420, -0.002392,
0.511114, 0.502392,
0.502391, 0.502406,
0.016129, 0.502392,
0.007435, -0.002392,
0.016158, -0.002406,
0.254928, -0.002391,
0.263621, 0.502392,
0.254898, 0.502406,
0.749913, -0.002392,
0.758607, 0.502391,
0.749884, 0.502406,
0.749884, 0.502406,
0.511143, -0.002406,
0.749913, -0.002392,
0.509698, 0.240095,
0.509698, 0.007827,
0.515100, 0.002426,
0.515100, 0.002426,
0.747367, 0.002426,
0.752768, 0.007827,
0.752768, 0.007827,
0.752768, 0.240095,
0.747367, 0.245496,
0.747367, 0.245496,
0.515100, 0.245496,
0.509698, 0.240095,
0.509698, 0.240095,
0.515100, 0.002426,
0.752768, 0.007827,
0.997377, 0.502405,
0.758607, 0.502391,
0.758636, -0.002406,
0.254898, 0.502406,
0.016129, 0.502392,
0.016158, -0.002406,
0.509116, 0.246158,
0.509116, 0.487765,
0.503498, 0.493384,
0.503498, 0.493384,
0.261891, 0.493384,
0.256272, 0.487765,
0.256272, 0.487765,
0.256272, 0.246158,
0.261891, 0.240540,
0.261891, 0.240540,
0.503498, 0.240540,
0.509116, 0.246158,
0.509116, 0.246158,
0.503498, 0.493384,
0.256272, 0.487765,
0.502391, 0.502406,
0.263621, 0.502392,
0.263650, -0.002406,
0.502420, -0.002392,
0.511143, -0.002406,
0.511114, 0.502392,
0.016129, 0.502392,
0.007406, 0.502406,
0.007435, -0.002392,
0.254928, -0.002391,
0.263650, -0.002406,
0.263621, 0.502392,
0.749913, -0.002392,
0.758636, -0.002406,
0.758607, 0.502391,
0.749884, 0.502406,
0.511114, 0.502392,
0.511143, -0.002406,
};
