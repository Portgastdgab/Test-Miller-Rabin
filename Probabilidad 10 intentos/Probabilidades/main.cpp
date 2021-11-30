#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> num;
    for (int i = 0; i< 1000; i++){
        num.push_back(i);
    }
    vector <int> prob1 = {11, 14, 30, 33, 46, 47, 49, 67, 68, 80, 93, 99, 103, 131, 159, 160, 167, 175, 181, 212, 221, 227, 234, 274, 275, 285, 296, 315, 326, 330, 344, 373, 389, 392, 399, 422, 423, 449, 450, 452, 484, 497, 503, 511, 520, 527, 557, 570, 587, 598, 617, 632, 635, 659, 661, 664, 689, 709, 716, 726, 743, 762, 778, 788, 810, 894, 907, 915, 927, 951, 965, 974, 985, 994, 997, 998};
    vector <int> prob2 = {10, 18, 35, 42, 52, 65, 80, 81, 87, 94, 140, 154, 166, 181, 187, 190, 197, 212, 223, 242, 251, 260, 268, 277, 297, 311, 320, 322, 324, 325, 329, 334, 338, 354, 372, 401, 407, 409, 433, 455, 462, 463, 465, 494, 498, 508, 542, 553, 571, 579, 583, 592, 614, 623, 625, 626, 641, 662, 664, 735, 744, 748, 757, 758, 783, 792, 818, 854, 867, 870, 872, 880, 884, 910, 939, 968, 989};
    vector <int> prob3 = {30, 70, 87, 96, 112, 147, 148, 155, 171, 187, 201, 203, 205, 215, 221, 250, 253, 255, 267, 344, 350, 363, 401, 437, 482, 495, 523, 527, 545, 548, 564, 566, 604, 620, 667, 670, 696, 701, 703, 708, 734, 739, 752, 810, 821, 835, 852, 874, 876, 908, 910, 912, 943, 959, 960, 965, 966, 969};
    vector <int> prob4 = {1, 10, 13, 16, 23, 49, 74, 83, 108, 124, 159, 170, 179, 203, 223, 241, 260, 270, 326, 328, 341, 351, 381, 384, 392, 400, 413, 427, 441, 446, 452, 454, 481, 490, 512, 517, 526, 539, 551, 554, 570, 571, 573, 575, 602, 620, 621, 622, 626, 631, 646, 651, 655, 663, 679, 684, 688, 701, 706, 716, 717, 728, 748, 753, 756, 764, 765, 778, 780, 799, 805, 808, 841, 864, 883, 884, 903, 923, 924, 927, 948, 953, 977, 980, 994, 995};
    vector <int> prob5 = {16, 32, 56, 62, 82, 98, 110, 129, 133, 140, 150, 154, 169, 185, 199, 227, 230, 242, 295, 316, 331, 334, 336, 352, 363, 374, 385, 406, 428, 434, 436, 446, 475, 514, 527, 538, 539, 544, 545, 561, 565, 566, 568, 574, 579, 587, 602, 603, 639, 648, 651, 653, 701, 712, 734, 756, 784, 805, 810, 820, 824, 827, 832, 840, 852, 857, 860, 863, 894, 898, 929, 943, 950, 974, 993};
    vector <int> prob6 = {24, 47, 57, 64, 103, 119, 121, 132, 166, 171, 194, 196, 222, 243, 252, 259, 260, 262, 294, 305, 311, 316, 327, 381, 395, 422, 424, 431, 449, 465, 481, 494, 506, 518, 519, 544, 571, 579, 581, 609, 615, 621, 643, 650, 661, 665, 701, 716, 719, 720, 730, 731, 733, 735, 769, 779, 790, 797, 860, 866, 884, 904, 908, 919, 933, 955, 964, 985, 988};
    vector <int> prob7 = {24, 75, 87, 90, 103, 115, 126, 134, 140, 158, 159, 185, 194, 199, 221, 229, 246, 255, 261, 262, 270, 279, 281, 290, 304, 305, 312, 317, 345, 352, 364, 367, 369, 392, 413, 415, 433, 441, 453, 479, 489, 497, 509, 523, 531, 536, 566, 605, 620, 637, 648, 659, 675, 749, 769, 787, 804, 861, 895, 982, 991};
    vector <int> prob8 = {8, 9, 23, 26, 33, 55, 56, 119, 120, 127, 165, 172, 215, 228, 261, 266, 294, 317, 322, 333, 359, 361, 386, 388, 398, 401, 405, 432, 434, 477, 491, 520, 523, 571, 580, 658, 678, 682, 696, 703, 717, 734, 744, 785, 788, 805, 810, 813, 824, 837, 866, 890, 901, 926, 935, 947, 953, 956, 962};
    vector <int> prob9 = {8, 14, 23, 60, 68, 104, 124, 128, 132, 137, 156, 161, 184, 200, 202, 218, 238, 243, 246, 257, 266, 276, 279, 283, 294, 307, 309, 310, 338, 342, 353, 367, 379, 411, 431, 440, 449, 456, 469, 491, 530, 557, 571, 608, 610, 631, 643, 644, 649, 651, 662, 673, 676, 683, 684, 696, 731, 747, 754, 778, 783, 794, 816, 822, 833, 835, 841, 863, 865, 872, 879, 923, 941, 961, 966, 991};
    vector <int> prob10 = {8, 14, 15, 31, 41, 54, 56, 67, 80, 122, 126, 128, 133, 161, 169, 171, 210, 214, 239, 248, 252, 257, 276, 302, 360, 364, 396, 406, 407, 412, 413, 430, 500, 502, 522, 524, 530, 532, 543, 551, 554, 571, 594, 595, 601, 606, 608, 614, 627, 629, 641, 658, 685, 702, 705, 712, 713, 714, 728, 730, 749, 765, 769, 776, 781, 784, 791, 805, 818, 827, 848, 866, 873, 905, 910, 913, 927, 937, 957, 966, 973, 974, 977, 994, 996};

    for (int i = 0; i< num.size(); i++){
        int cont = 0;
        for (int j = 0; j < prob1.size(); j++){
            if (prob1[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob2.size(); j++){
            if (prob2[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob3.size(); j++){
            if (prob3[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob4.size(); j++){
            if (prob4[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob5.size(); j++){
            if (prob5[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob6.size(); j++){
            if (prob6[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob7.size(); j++){
            if (prob7[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob8.size(); j++){
            if (prob8[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob9.size(); j++){
            if (prob9[j] == i){
                cont++;
            }
        }
        for (int j = 0; j < prob10.size(); j++){
            if (prob10[j] == i){
                cont++;
            }
        }
        if (cont > 3){
            cout<<i<<" acierta "<<cont<<" veces"<<endl;
        }
    }

}