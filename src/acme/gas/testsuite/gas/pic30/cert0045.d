#as:
#objdump: -s -t
#name: .asciz in text section
#source: cert0045.s



dump\.o:     file format coff-pic30

SYMBOL TABLE:
\[  0\]\(sec -2\)\(fl 0x00\)\(ty   0\)\(scl 103\) \(nx 1\) 0x00000000 fake
File 
\[  2\]\(sec -1\)\(fl 0x00\)\(ty   0\)\(scl   3\) \(nx 0\) 0x00000001 __C30COFF
\[  3\]\(sec  2\)\(fl 0x00\)\(ty   0\)\(scl   3\) \(nx 0\) 0x00000000 var1
\[  4\]\(sec  2\)\(fl 0x00\)\(ty   0\)\(scl   3\) \(nx 0\) 0x00000004 var2
\[  5\]\(sec  2\)\(fl 0x00\)\(ty   0\)\(scl   3\) \(nx 0\) 0x00000008 var3
\[  6\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x00000000 ascid1
\[  7\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x0000002c ascid2
\[  8\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x00000048 ascid3
\[  9\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x00000064 ascid4
\[ 10\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x00000070 ascid5
\[ 11\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x0000007c ascid6
\[ 12\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x0000008c ascid7
\[ 13\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x00000094 ascid8
\[ 14\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x0000009a ascid9
\[ 15\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001ae L11
\[ 16\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001b4 L21
\[ 17\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001bc L31
\[ 18\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001c0 L41
\[ 19\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001c4 L51
\[ 20\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001ca L61
\[ 21\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001d0 L71
\[ 22\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001d8 L81
\[ 23\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001de L91
\[ 24\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   6\) \(nx 0\) 0x000001e2 L1
\[ 25\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   3\) \(nx 1\) 0x00000000 \.text
AUX scnlen 0x3cc nreloc 26 nlnno 0
\[ 27\]\(sec  2\)\(fl 0x00\)\(ty   0\)\(scl   3\) \(nx 1\) 0x00000000 \.data
AUX scnlen 0x14 nreloc 0 nlnno 0
\[ 29\]\(sec  3\)\(fl 0x00\)\(ty   0\)\(scl   3\) \(nx 1\) 0x00000000 \.bss
AUX scnlen 0x0 nreloc 0 nlnno 0
\[ 31\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   2\) \(nx 0\) 0x000001aa main
\[ 32\]\(sec  1\)\(fl 0x00\)\(ty   0\)\(scl   2\) \(nx 0\) 0x000000d2 foo
\[ 33\]\(sec  0\)\(fl 0x00\)\(ty   0\)\(scl   2\) \(nx 0\) 0x00000000 externdefine
\[ 34\]\(sec  0\)\(fl 0x00\)\(ty   0\)\(scl   2\) \(nx 0\) 0x00000000 main2


Contents of section \.text:
 0000 546800 697300 206900 732000  Th\.is\. i\.s \.
 0008 616e00 206100 736300 696900  an\. a\.sc\.ii\.
 0010 207300 747200 696e00 672000   s\.tr\.in\.g \.
 0018 696e00 207400 686500 206400  in\. t\.he\. d\.
 0020 617400 612000 736500 637400  at\.a \.se\.ct\.
 0028 696f00 6e0000 616200 636400  io\.n\.\.ab\.cd\.
 0030 656600 676800 696a00 6b6c00  ef\.gh\.ij\.kl\.
 0038 6d6e00 6f7000 717200 737400  mn\.op\.qr\.st\.
 0040 757600 777800 797a00 000000  uv\.wx\.yz\.\.\.\.
 0048 414200 434400 454600 474800  AB\.CD\.EF\.GH\.
 0050 494a00 4b4c00 4d4e00 4f5000  IJ\.KL\.MN\.OP\.
 0058 515200 535400 555600 575800  QR\.ST\.UV\.WX\.
 0060 595a00 000000 303100 323300  YZ\.\.\.\.01\.23\.
 0068 343500 363700 383900 000000  45\.67\.89\.\.\.\.
 0070 070800 090a00 0b0c00 0d2a00  \.\.\.	\.\.\.\.\.\.\*\.
 0078 732000 000000 212200 232400  s \.\.\.\.\!\"\.\#\$\.
 0080 252600 272800 292a00 2b2700  %&\.\'\(\.\)\*\.\+\'\.
 0088 2d2e00 2f0000 3a6c00 3c3d00  -\.\./\.\.:l\.\<=\.
 0090 3e3f00 400000 5b5d00 5e5f00  \>\?\.@\.\.\[\]\.\^_\.
 0098 600000 7b7c00 7d7e00 000000  \`\.\.\{\|\.\}~\.\.\.\.
 00a0 000004 000000 000004 000000  \.\.\.\.\.\.\.\.\.\.\.\.
 00a8 000004 000000 000004 000000  \.\.\.\.\.\.\.\.\.\.\.\.
 00b0 000004 000000 000004 000000  \.\.\.\.\.\.\.\.\.\.\.\.
 00b8 000004 000000 000004 000000  \.\.\.\.\.\.\.\.\.\.\.\.
 00c0 000004 000000 000004 000000  \.\.\.\.\.\.\.\.\.\.\.\.
 00c8 000004 000000 000004 000000  \.\.\.\.\.\.\.\.\.\.\.\.
 00d0 0000ff 0000ff 546500 737400  \.\..\.\..Te\.st\.
 00d8 206f00 662000 6c6900 737400   o\.f \.li\.st\.
 00e0 696e00 672000 636f00 6e7400  in\.g \.co\.nt\.
 00e8 696e00 756100 746900 6f6e00  in\.ua\.ti\.on\.
 00f0 206c00 696e00 657300 2e2000   l\.in\.es\.\. \.
 00f8 205400 686900 732000 6c6900   T\.hi\.s \.li\.
 0100 6e6500 207300 686f00 756c00  ne\. s\.ho\.ul\.
 0108 642000 626500 207200 656100  d \.be\. r\.ea\.
 0110 6c6c00 792000 726500 616c00  ll\.y \.re\.al\.
 0118 6c7900 207200 656100 6c6c00  ly\. r\.ea\.ll\.
 0120 792000 6c6f00 6e6700 207300  y \.lo\.ng\. s\.
 0128 6f2000 746800 617400 206700  o \.th\.at\. g\.
 0130 617300 206900 732000 666f00  as\. i\.s \.fo\.
 0138 726300 656400 207400 6f2000  rc\.ed\. t\.o \.
 0140 757300 652000 636f00 6e7400  us\.e \.co\.nt\.
 0148 696e00 756100 746900 6f6e00  in\.ua\.ti\.on\.
 0150 206c00 696e00 657300 2e0a00   l\.in\.es\.\.\.\.
 0158 546800 697300 206100 736300  Th\.is\. a\.sc\.
 0160 696900 207300 747200 696e00  ii\. s\.tr\.in\.
 0168 672000 736800 6f7500 6c6400  g \.sh\.ou\.ld\.
 0170 206e00 6f7400 206100 707000   n\.ot\. a\.pp\.
 0178 656100 722000 696e00 207400  ea\.r \.in\. t\.
 0180 686500 206c00 697300 742000  he\. l\.is\.t \.
 0188 666900 6c6500 0a5200 657300  fi\.le\.\.R\.es\.
 0190 756d00 652000 6c6900 737400  um\.e \.li\.st\.
 0198 696e00 672000 696e00 206c00  in\.g \.in\. l\.
 01a0 697300 742000 666900 6c6500  is\.t \.fi\.le\.
 01a8 2e0000 550020 160020 86834a  \.\.\.U\. \.\. ..J
 01b0 06acb8 160020 86834a 06acb8  \...\.\. ..J\...
 01b8 160020 86834a 06acb8 160020  \.\. ..J\...\.\. 
 01c0 86834a 06acb8 160020 86834a  ..J\...\.\. ..J
 01c8 06acb8 160020 86834a 06acb8  \...\.\. ..J\...
 01d0 160020 86834a 06acb8 160020  \.\. ..J\...\.\. 
 01d8 86834a 06acb8 160020 86834a  ..J\...\.\. ..J
 01e0 06acb8 000004 000000         \...\.\.\.\.\.\.   
Contents of section \.data:
 0000 39300000 31d40000 7f00               90\.\.1.\.\.\.\.      