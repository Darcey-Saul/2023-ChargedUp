#include "Armavator.h"
#include <vector>

std::vector<ArmavatorPosition> InitialToCollect = {ArmavatorPosition{1.3_m, -90.0_deg}, ArmavatorPosition{1.2999939183_m, -89.999305556_deg}, ArmavatorPosition{1.2999077368_m, -89.989467592_deg}, ArmavatorPosition{1.2996691858_m, -89.962268517_deg}, ArmavatorPosition{1.2992778958_m, -89.91770833_deg}, ArmavatorPosition{1.2987337977_m, -89.855787031_deg}, ArmavatorPosition{1.2980369727_m, -89.77650462_deg}, ArmavatorPosition{1.2971876266_m, -89.679861098_deg}, ArmavatorPosition{1.2961861122_m, -89.565856465_deg}, ArmavatorPosition{1.2950330004_m, -89.434490719_deg}, ArmavatorPosition{1.2937291589_m, -89.285763863_deg}, ArmavatorPosition{1.2922757329_m, -89.119675895_deg}, ArmavatorPosition{1.2906740983_m, -88.936226815_deg}, ArmavatorPosition{1.2889269839_m, -88.735416625_deg}, ArmavatorPosition{1.2870461578_m, -88.517245323_deg}, ArmavatorPosition{1.2850822015_m, -88.281712911_deg}, ArmavatorPosition{1.2831079423_m, -88.028819387_deg}, ArmavatorPosition{1.2811649337_m, -87.758564753_deg}, ArmavatorPosition{1.2792673691_m, -87.470949009_deg}, ArmavatorPosition{1.2774213589_m, -87.165972154_deg}, ArmavatorPosition{1.2756301461_m, -86.84363419_deg}, ArmavatorPosition{1.2738956901_m, -86.503935116_deg}, ArmavatorPosition{1.2722192797_m, -86.146874935_deg}, ArmavatorPosition{1.2706018138_m, -85.772453647_deg}, ArmavatorPosition{1.2690439463_m, -85.380671256_deg}, ArmavatorPosition{1.267546168_m, -84.972916663_deg}, ArmavatorPosition{1.2661088559_m, -84.566087997_deg}, ArmavatorPosition{1.2647323044_m, -84.176620419_deg}, ArmavatorPosition{1.2634167462_m, -83.804513945_deg}, ArmavatorPosition{1.2621623665_m, -83.449768578_deg}, ArmavatorPosition{1.260969313_m, -83.11238432_deg}, ArmavatorPosition{1.2598377034_m, -82.792361171_deg}, ArmavatorPosition{1.2587676304_m, -82.489699131_deg}, ArmavatorPosition{1.2577591659_m, -82.204398202_deg}, ArmavatorPosition{1.2568123639_m, -81.936458383_deg}, ArmavatorPosition{1.2559272627_m, -81.685879675_deg}, ArmavatorPosition{1.2551038865_m, -81.452662078_deg}, ArmavatorPosition{1.2543422463_m, -81.236805591_deg}, ArmavatorPosition{1.253642341_m, -81.038310216_deg}, ArmavatorPosition{1.2530041575_m, -80.857175952_deg}, ArmavatorPosition{1.2524276703_m, -80.693402799_deg}, ArmavatorPosition{1.2519128412_m, -80.546990758_deg}, ArmavatorPosition{1.2514596181_m, -80.417939828_deg}, ArmavatorPosition{1.2510679328_m, -80.30625001_deg}, ArmavatorPosition{1.2507376972_m, -80.211921303_deg}, ArmavatorPosition{1.2504687983_m, -80.134953708_deg}, ArmavatorPosition{1.2502610874_m, -80.075347224_deg}, ArmavatorPosition{1.2501143601_m, -80.033101853_deg}, ArmavatorPosition{1.2500283038_m, -80.008217593_deg}, ArmavatorPosition{1.25_m, -80.0_deg}};
std::vector<ArmavatorPosition> CollectionToLow = {ArmavatorPosition{1.25_m, -80.0_deg}, ArmavatorPosition{1.2500059526_m, -79.998004861_deg}, ArmavatorPosition{1.2500902805_m, -79.969740393_deg}, ArmavatorPosition{1.2503234233_m, -79.891597452_deg}, ArmavatorPosition{1.2507053822_m, -79.76357604_deg}, ArmavatorPosition{1.2512361574_m, -79.585676155_deg}, ArmavatorPosition{1.2519157486_m, -79.357897798_deg}, ArmavatorPosition{1.2527441547_m, -79.080240968_deg}, ArmavatorPosition{1.2537213746_m, -78.752705667_deg}, ArmavatorPosition{1.2548474061_m, -78.375291893_deg}, ArmavatorPosition{1.2561222462_m, -77.947999647_deg}, ArmavatorPosition{1.2575458904_m, -77.470828929_deg}, ArmavatorPosition{1.2591183313_m, -76.943779738_deg}, ArmavatorPosition{1.2608395555_m, -76.366852075_deg}, ArmavatorPosition{1.262709529_m, -75.74004594_deg}, ArmavatorPosition{1.2647197626_m, -75.063361333_deg}, ArmavatorPosition{1.2667681537_m, -74.336798254_deg}, ArmavatorPosition{1.2687554039_m, -73.560356702_deg}, ArmavatorPosition{1.2706814233_m, -72.734036679_deg}, ArmavatorPosition{1.2725461959_m, -71.857838183_deg}, ArmavatorPosition{1.2743497122_m, -70.931761214_deg}, ArmavatorPosition{1.2760919657_m, -69.955805774_deg}, ArmavatorPosition{1.2777729524_m, -68.929971861_deg}, ArmavatorPosition{1.2793926696_m, -67.854259476_deg}, ArmavatorPosition{1.2809511155_m, -66.728668619_deg}, ArmavatorPosition{1.2824482887_m, -65.557189568_deg}, ArmavatorPosition{1.2838841881_m, -64.388370703_deg}, ArmavatorPosition{1.2852588127_m, -63.26943031_deg}, ArmavatorPosition{1.286572162_m, -62.200368389_deg}, ArmavatorPosition{1.2878242352_m, -61.181184941_deg}, ArmavatorPosition{1.289015032_m, -60.211879965_deg}, ArmavatorPosition{1.2901445521_m, -59.292453461_deg}, ArmavatorPosition{1.2912127951_m, -58.422905429_deg}, ArmavatorPosition{1.2922197609_m, -57.603235869_deg}, ArmavatorPosition{1.2931654492_m, -56.833444782_deg}, ArmavatorPosition{1.2940498601_m, -56.113532167_deg}, ArmavatorPosition{1.2948729935_m, -55.443498024_deg}, ArmavatorPosition{1.2956348493_m, -54.823342353_deg}, ArmavatorPosition{1.2963354277_m, -54.253065155_deg}, ArmavatorPosition{1.2969747287_m, -53.732666429_deg}, ArmavatorPosition{1.2975527524_m, -53.262146175_deg}, ArmavatorPosition{1.298069499_m, -52.841504393_deg}, ArmavatorPosition{1.2985249689_m, -52.470741083_deg}, ArmavatorPosition{1.2989191621_m, -52.149856246_deg}, ArmavatorPosition{1.2992520793_m, -51.878849881_deg}, ArmavatorPosition{1.2995237208_m, -51.657721988_deg}, ArmavatorPosition{1.2997340873_m, -51.486472568_deg}, ArmavatorPosition{1.2998831798_m, -51.365101619_deg}, ArmavatorPosition{1.2999709996_m, -51.293609143_deg}, ArmavatorPosition{1.3_m, -51.27_deg}};
std::vector<ArmavatorPosition>collectionToMiddle = { {ArmavatorPosition{1.25_m, -80.0_deg}, ArmavatorPosition{1.2500000665_m, -79.995868055_deg}, ArmavatorPosition{1.2500011276_m, -79.937332163_deg}, ArmavatorPosition{1.2500057306_m, -79.775497641_deg}, ArmavatorPosition{1.2500194447_m, -79.51036449_deg}, ArmavatorPosition{1.2500513824_m, -79.14193271_deg}, ArmavatorPosition{1.2501125273_m, -78.670202304_deg}, ArmavatorPosition{1.2502146171_m, -78.095173272_deg}, ArmavatorPosition{1.250369698_m, -77.416845616_deg}, ArmavatorPosition{1.2505898087_m, -76.635219337_deg}, ArmavatorPosition{1.2508861306_m, -75.750294438_deg}, ArmavatorPosition{1.2512683159_m, -74.762070919_deg}, ArmavatorPosition{1.2517442343_m, -73.670548784_deg}, ArmavatorPosition{1.252319924_m, -72.475728034_deg}, ArmavatorPosition{1.2529996782_m, -71.177608674_deg}, ArmavatorPosition{1.2537862014_m, -69.776190707_deg}, ArmavatorPosition{1.2546807774_m, -68.271474137_deg}, ArmavatorPosition{1.2556834192_m, -66.663458969_deg}, ArmavatorPosition{1.2567929893_m, -64.952145211_deg}, ArmavatorPosition{1.258007289_m, -63.137532871_deg}, ArmavatorPosition{1.2593231234_m, -61.219621961_deg}, ArmavatorPosition{1.2607363443_m, -59.198412498_deg}, ArmavatorPosition{1.2622418764_m, -57.073904508_deg}, ArmavatorPosition{1.2638337307_m, -54.846098037_deg}, ArmavatorPosition{1.2655050078_m, -52.514993199_deg}, ArmavatorPosition{1.2672478933_m, -50.088854198_deg}, ArmavatorPosition{1.26905365_m, -47.668224435_deg}, ArmavatorPosition{1.2709126105_m, -45.350892689_deg}, ArmavatorPosition{1.2728141744_m, -43.136859346_deg}, ArmavatorPosition{1.2747468155_m, -41.026124493_deg}, ArmavatorPosition{1.2766981063_m, -39.018688172_deg}, ArmavatorPosition{1.2786547639_m, -37.114550406_deg}, ArmavatorPosition{1.2806027299_m, -35.313711213_deg}, ArmavatorPosition{1.2825273129_m, -33.616170602_deg}, ArmavatorPosition{1.2844134537_m, -32.021928583_deg}, ArmavatorPosition{1.2862460334_m, -30.530985162_deg}, ArmavatorPosition{1.2880102062_m, -29.143340345_deg}, ArmavatorPosition{1.2896917227_m, -27.858994136_deg}, ArmavatorPosition{1.2912772426_m, -26.677946537_deg}, ArmavatorPosition{1.2927547084_m, -25.600197554_deg}, ArmavatorPosition{1.2941135747_m, -24.625747187_deg}, ArmavatorPosition{1.2953447862_m, -23.754595439_deg}, ArmavatorPosition{1.2964406561_m, -22.986742313_deg}, ArmavatorPosition{1.2973949492_m, -22.322187809_deg}, ArmavatorPosition{1.2982030229_m, -21.76093193_deg}, ArmavatorPosition{1.2988617391_m, -21.302974677_deg}, ArmavatorPosition{1.2993693935_m, -20.94831605_deg}, ArmavatorPosition{1.2997258162_m, -20.696956053_deg}, ArmavatorPosition{1.2999326911_m, -20.548894684_deg}, ArmavatorPosition{1.3_m, -20.5_deg}}};
std::vector<ArmavatorPosition>collectionToHigh = { {ArmavatorPosition{1.25_m, -80.0_deg}, ArmavatorPosition{1.2500059523_m, -79.994444444_deg}, ArmavatorPosition{1.2500902773_m, -79.915740739_deg}, ArmavatorPosition{1.2503234137_m, -79.698148144_deg}, ArmavatorPosition{1.250705365_m, -79.341666661_deg}, ArmavatorPosition{1.2512361316_m, -78.846296289_deg}, ArmavatorPosition{1.2519157127_m, -78.212037028_deg}, ArmavatorPosition{1.2527441057_m, -77.438888878_deg}, ArmavatorPosition{1.2537213071_m, -76.526851839_deg}, ArmavatorPosition{1.2548473113_m, -75.475925911_deg}, ArmavatorPosition{1.2561221104_m, -74.286111095_deg}, ArmavatorPosition{1.2575456922_m, -72.957407389_deg}, ArmavatorPosition{1.2591180377_m, -71.489814795_deg}, ArmavatorPosition{1.2608391125_m, -69.883333311_deg}, ArmavatorPosition{1.2627088364_m, -68.137962939_deg}, ArmavatorPosition{1.2647186234_m, -66.253703678_deg}, ArmavatorPosition{1.2667666071_m, -64.230555528_deg}, ArmavatorPosition{1.2687537061_m, -62.068518489_deg}, ArmavatorPosition{1.2706796843_m, -59.767592561_deg}, ArmavatorPosition{1.2725444743_m, -57.327777745_deg}, ArmavatorPosition{1.2743480435_m, -54.749074039_deg}, ArmavatorPosition{1.2760903734_m, -52.031481445_deg}, ArmavatorPosition{1.2777714521_m, -49.174999962_deg}, ArmavatorPosition{1.2793912715_m, -46.179629589_deg}, ArmavatorPosition{1.2809498256_m, -43.045370328_deg}, ArmavatorPosition{1.2824471097_m, -39.78333329_deg}, ArmavatorPosition{1.2838831206_m, -36.528703662_deg}, ArmavatorPosition{1.2852578553_m, -33.412962923_deg}, ArmavatorPosition{1.2865713119_m, -30.436111073_deg}, ArmavatorPosition{1.2878234884_m, -27.598148112_deg}, ArmavatorPosition{1.2890143837_m, -24.89907404_deg}, ArmavatorPosition{1.2901439965_m, -22.338888856_deg}, ArmavatorPosition{1.2912123261_m, -19.917592562_deg}, ArmavatorPosition{1.2922193719_m, -17.635185156_deg}, ArmavatorPosition{1.2931651332_m, -15.49166664_deg}, ArmavatorPosition{1.2940496098_m, -13.487037012_deg}, ArmavatorPosition{1.2948728015_m, -11.621296273_deg}, ArmavatorPosition{1.2956347083_m, -9.8944444228_deg}, ArmavatorPosition{1.2963353302_m, -8.3064814617_deg}, ArmavatorPosition{1.2969746674_m, -6.8574073894_deg}, ArmavatorPosition{1.2975527203_m, -5.547222206_deg}, ArmavatorPosition{1.2980694892_m, -4.3759259115_deg}, ArmavatorPosition{1.2985249748_m, -3.3435185059_deg}, ArmavatorPosition{1.2989191778_m, -2.4499999892_deg}, ArmavatorPosition{1.2992520992_m, -1.6953703614_deg}, ArmavatorPosition{1.2995237404_m, -1.0796296224_deg}, ArmavatorPosition{1.2997341029_m, -0.60277777241_deg}, ArmavatorPosition{1.2998831891_m, -0.26481481126_deg}, ArmavatorPosition{1.2999710025_m, -0.065740738997_deg}, ArmavatorPosition{1.3_m, 0.0_deg}}};