#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("  *************ASCII  Table************\n");
    printf("  *************************************\n");

    printf("   Decimal\tHexadecimal\tOctaal\tcharacter\n\n");

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("\t%d\t\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("  *****************************\n");

    return 0;
}


// output : 

/*

 *************ASCII  Table************
  *************************************
   Decimal      Hexadecimal     Octaal  character

        0               0       0
        1               1       1       ☺
        2               2       2       ☻
        3               3       3       ♥
        4               4       4       ♦
        5               5       5       ♣
        6               6       6       ♠
        7               7       7
        8               8       10
        9               9       11
        10              a       12

        11              b       13

        12              c       14

        13              d       15
        14              e       16
        15              f       17
        16              10      20      ►
        17              11      21      ◄
        18              12      22      ↕
        19              13      23      ‼
        20              14      24      ¶
        21              15      25      §
        22              16      26      ▬
        23              17      27      ↨
        24              18      30      ↑
        25              19      31      ↓
        26              1a      32      →
        27              1b      33

                8               1c      34      ∟
        29              1d      35      ↔
        30              1e      36      ▲
        31              1f      37      ▼
        32              20      40
        33              21      41      !
        34              22      42      "
        35              23      43      #
        36              24      44      $
        37              25      45      %
        38              26      46      &
        39              27      47      '
        40              28      50      (
        41              29      51      )
        42              2a      52      *
        43              2b      53      +
        44              2c      54      ,
        45              2d      55      -
        46              2e      56      .
        47              2f      57      /
        48              30      60      0
        49              31      61      1
        50              32      62      2
        51              33      63      3
        52              34      64      4
        53              35      65      5
        54              36      66      6
        55              37      67      7
        56              38      70      8
        57              39      71      9
        58              3a      72      :
        59              3b      73      ;
        60              3c      74      <
        61              3d      75      =
        62              3e      76      >
        63              3f      77      ?
        64              40      100     @
        65              41      101     A
        66              42      102     B
        67              43      103     C
        68              44      104     D
        69              45      105     E
        70              46      106     F
        71              47      107     G
        72              48      110     H
        73              49      111     I
        74              4a      112     J
        75              4b      113     K
        76              4c      114     L
        77              4d      115     M
        78              4e      116     N
        79              4f      117     O
        80              50      120     P
        81              51      121     Q
        82              52      122     R
        83              53      123     S
        84              54      124     T
        85              55      125     U
        86              56      126     V
        87              57      127     W
        88              58      130     X
        89              59      131     Y
        90              5a      132     Z
        91              5b      133     [
        92              5c      134     \
        93              5d      135     ]
        94              5e      136     ^
        95              5f      137     _
        96              60      140     `
        97              61      141     a
        98              62      142     b
        99              63      143     c
        100             64      144     d
        101             65      145     e
        102             66      146     f
        103             67      147     g
        104             68      150     h
        105             69      151     i
        106             6a      152     j
        107             6b      153     k
        108             6c      154     l
        109             6d      155     m
        110             6e      156     n
        111             6f      157     o
        112             70      160     p
        113             71      161     q
        114             72      162     r
        115             73      163     s
        116             74      164     t
        117             75      165     u
        118             76      166     v
        119             77      167     w
        120             78      170     x
        121             79      171     y
        122             7a      172     z
        123             7b      173     {
        124             7c      174     |
        125             7d      175     }
        126             7e      176     ~
        127             7f      177
  *****************************

*/
