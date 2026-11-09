/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00189984 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00189984(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_ram_0018c42c == '\x01') {
    _DAT_ram_e600001c = 4;
  }
  else {
    _DAT_ram_e600001c = 0;
  }
  _DAT_ram_e5052000 = 0x4204;
  _DAT_ram_e60002c8 = 0;
  _DAT_ram_e6000004 = 0x1000040;
  _DAT_ram_e600000c = 0xa0;
  if (DAT_ram_0018c010 == 3) {
    _DAT_ram_e6090498 = 0x10;
    _DAT_ram_e60904a0 = 0x10;
    _DAT_ram_e60904b0 = 0x10;
    _DAT_ram_e60904b8 = 0x10;
    _DAT_ram_e60904c8 = 0x10;
    _DAT_ram_e60904d0 = 0x10;
    _DAT_ram_e60904e0 = 0x10;
    _DAT_ram_e60904e8 = 0x10;
    _DAT_ram_e60904c0 = 5;
  }
  else {
    _DAT_ram_e6090498 = 0x1c;
    _DAT_ram_e60904a0 = 0x1c;
    _DAT_ram_e60904b0 = 0x1c;
    _DAT_ram_e60904b8 = 0x1c;
    _DAT_ram_e60904c8 = 0x1c;
    _DAT_ram_e60904d0 = 0x1c;
    _DAT_ram_e60904e0 = 0x1c;
    _DAT_ram_e60904e8 = 0x1c;
    if (DAT_ram_0018c010 != 3) {
      _DAT_ram_e60904e8 = 0x1c;
      _DAT_ram_e60904e0 = 0x1c;
      _DAT_ram_e60904d0 = 0x1c;
      _DAT_ram_e60904c8 = 0x1c;
      _DAT_ram_e60904b8 = 0x1c;
      _DAT_ram_e60904b0 = 0x1c;
      _DAT_ram_e60904a0 = 0x1c;
      _DAT_ram_e6090498 = 0x1c;
      _DAT_ram_e6090488 = 0xf5;
      goto LAB_ram_00189aac;
    }
  }
  _DAT_ram_e6090488 = 0xfa;
LAB_ram_00189aac:
  _DAT_ram_e6000008 = 8;
  FUN_ram_00182f88();
  _DAT_ram_e60904c4 = 0x20;
  _DAT_ram_e6000008 = 0;
  _DAT_ram_e6000108 = 0x5000;
  _DAT_ram_e600010c = 0xc3;
  _DAT_ram_e6000204 = 12800000;
  _DAT_ram_e6000208 = 1;
  _DAT_ram_e600020c = 12800000;
  _DAT_ram_e6000210 = 1;
  _DAT_ram_e6000214 = &DAT_ram_001d4c00;
  _DAT_ram_e6000218 = 1;
  _DAT_ram_e600021c = 1;
  _DAT_ram_e601001c = 1;
  _DAT_ram_e60903a8 = 0x8000;
  _DAT_ram_e60903b8 = 0x10696;
  _DAT_ram_e60903b0 = 0x42;
  _DAT_ram_e60903c8 = 0x1e;
  _DAT_ram_e60903d0 = 5;
  _DAT_ram_e60903d8 = 8;
  _DAT_ram_e60903bc = 0xfffff;
  _DAT_ram_e60903ac = 0xfffff;
  _DAT_ram_e60903b4 = 0;
  _DAT_ram_e60903c4 = 1;
  _DAT_ram_e60903d4 = 0xc;
  _DAT_ram_e60903dc = 8;
  _DAT_ram_e609041c = 0xc;
  _DAT_ram_e60900cc = 0x7fc;
  _DAT_ram_e6090288 = 4;
  _DAT_ram_e6090634 = 1;
  _DAT_ram_e6090360 = 0;
  _DAT_ram_e6090334 = 1;
  _DAT_ram_e6090368 = 1;
  _DAT_ram_e6000010 = 0x6c;
  _DAT_ram_e6090238 = 0x58;
  if (DAT_ram_0018c010 == 3) {
    _DAT_ram_e6090610 = 0;
  }
  else {
    _DAT_ram_e6090610 = 0x4444;
  }
  FUN_ram_001793f0(0);
  _DAT_ram_e60b3000 = DAT_ram_0019d4d0;
  _DAT_ram_e60b3004 = DAT_ram_0019d4d4;
  _DAT_ram_e60b3008 = DAT_ram_0019d4d8;
  _DAT_ram_e60b300c = DAT_ram_0019d4dc;
  _DAT_ram_e60b3010 = DAT_ram_0019d4e0;
  _DAT_ram_e60b3014 = DAT_ram_0019d4e4;
  _DAT_ram_e60b3018 = DAT_ram_0019d4e8;
  _DAT_ram_e60b301c = DAT_ram_0019d4ec;
  _DAT_ram_e60b3020 = DAT_ram_0019d4f0;
  _DAT_ram_e60b3024 = DAT_ram_0019d4f4;
  _DAT_ram_e60b3028 = DAT_ram_0019d4f8;
  _DAT_ram_e60b302c = DAT_ram_0019d4fc;
  _DAT_ram_e60b3030 = DAT_ram_0019d500;
  _DAT_ram_e60b3034 = DAT_ram_0019d504;
  _DAT_ram_e60b3038 = DAT_ram_0019d508;
  _DAT_ram_e60b303c = DAT_ram_0019d50c;
  _DAT_ram_e60b3040 = DAT_ram_0019d510;
  _DAT_ram_e60b3044 = DAT_ram_0019d514;
  _DAT_ram_e60b3048 = DAT_ram_0019d518;
  _DAT_ram_e60b304c = DAT_ram_0019d51c;
  _DAT_ram_e6090388 = 8;
  _DAT_ram_e60903c0 = 3;
  _DAT_ram_e6010038 = 1;
  _DAT_ram_e6091094 = 7;
  _DAT_ram_e6090220 = 1;
  _DAT_ram_e60902e4 = 0xa000;
  _DAT_ram_e6091084 = 9;
  iVar1 = FUN_ram_000e6c28();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_000e6c28(5);
    if (iVar1 == 0) {
      _DAT_ram_e60905dc = 0x8888;
    }
    else {
      _DAT_ram_e60905dc = 0x88;
    }
  }
  else {
    _DAT_ram_e60905dc = 0x888;
  }
  _DAT_ram_e6090350 = 0xb0;
  _DAT_ram_e6090290 = 0x78;
  _DAT_ram_e6090294 = 0xf0;
  _DAT_ram_e60902a0 = 0x6e;
  _DAT_ram_e6090284 = 0x65;
  _DAT_ram_e6090450 = 6;
  _DAT_ram_e609044c = 2;
  _DAT_ram_e60902b4 = 0x14;
  _DAT_ram_e6090260 = 0xf10;
  _DAT_ram_e605004c = 0x388;
  _DAT_ram_e6010004 = 8;
  FUN_ram_0018897c(&DAT_ram_001ab9f0,&DAT_ram_001aba40,0);
  _DAT_ram_e6050040 = 0x520;
  iVar1 = FUN_ram_000e5038();
  uVar3 = _DAT_ram_e6090530;
  _DAT_ram_e6090344 = 1;
  DAT_ram_0018c424 = 0x283;
  if (iVar1 != 8) {
    DAT_ram_0018c424 = 0x200;
  }
  _DAT_ram_e60501fc = 10;
  _DAT_ram_e6050228 = 1;
  _DAT_ram_e6050238 = 0;
  _DAT_ram_e6050224 = 0;
  _DAT_ram_e6090180 = 1;
  _DAT_ram_e60910d0 = 0;
  _DAT_ram_e60910cc = 0;
  _DAT_ram_e6000028 = 0x14;
  _DAT_ram_e60000cc = 0x229;
  _DAT_ram_e60f0010 = 0x1a;
  _DAT_ram_e609010c = 0xf;
  _DAT_ram_e601012c = 4;
  _DAT_ram_e601004c = 0;
  _DAT_ram_e6010058 = 0x1000;
  _DAT_ram_e60f00e8 = 0x5a0;
  _DAT_ram_e60f00ec = 0x5a0;
  _DAT_ram_e60f003c = 0xf87;
  _DAT_ram_e60f0044 = 2;
  _DAT_ram_e60f00d8 = 0x15;
  _DAT_ram_e60f00dc = 0x15;
  _DAT_ram_e6090248 = DAT_ram_0018c424;
  iVar2 = FUN_ram_001521c0();
  uVar3 = uVar3 & 0xfffffffc;
  if (iVar2 != 6) {
    FUN_ram_000ee260(s_bb_init__FEM_0x_x_bw_mode__d_cha_ram_001cb038,iVar1,param_1,param_2,param_3,
                     param_4);
  }
  if ((param_1 == 0x50) || (param_1 != 0x28)) {
    uVar3 = uVar3 | 2;
  }
  _DAT_ram_e6090530 = uVar3 | 0x80000000;
  FUN_ram_001889d4(0,0);
  FUN_ram_00188a28(0,0);
  FUN_ram_00188ae8(0,0,param_4);
  FUN_ram_00188d5c(param_1,param_4);
  if (DAT_ram_0018c010 == 3) {
    _DAT_ram_e60910d4 = 0x1f5;
  }
  else if ((&UNK_auxregs_05ff < *(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2)) ||
          (*(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2) == (undefined *)0x0)) {
    _DAT_ram_e60910d4 = 0x135;
  }
  else {
    _DAT_ram_e60910d4 = 0x235;
  }
  _DAT_ram_e601003c = 1 - param_4;
  if (1 < param_4) {
    _DAT_ram_e601003c = 0;
  }
  _DAT_ram_e60000f0 = 0x40;
  _DAT_ram_e60914d4 = 1;
  _DAT_ram_e60914e0 = 80000;
  _DAT_ram_e60914e4 = 10000;
  _DAT_ram_e6091534 = 0x1a;
  _DAT_ram_e6091540 = 9;
  _DAT_ram_e6091510 = 0x78;
  _DAT_ram_e6091564 = 1;
  _DAT_ram_e6091504 = 0;
  _DAT_ram_e6091508 = 0x8e;
  _DAT_ram_e6091524 = 1;
  if (DAT_ram_0018c010 == 3) {
    FUN_ram_00183ee0(0x27);
  }
  else if ((DAT_ram_800261c0 & 2) == 0) {
    _DAT_ram_e609036c = 0x1d;
    _DAT_ram_e6090364 = 0x1d;
  }
  else {
    _DAT_ram_e609036c = 0x27;
    _DAT_ram_e6090364 = 0x27;
  }
  _DAT_ram_e6091538 = 1;
  _DAT_ram_e60903cc = 0x20;
  _DAT_ram_e6010080 = 0x453;
  _DAT_ram_e6010188 = 0x55555557;
  _DAT_ram_e6010240 = 0x14;
  _DAT_ram_e60101c0 = 0x17;
  _DAT_ram_e6090298 = 0x78;
  _DAT_ram_e609029c = 0xf0;
  _DAT_ram_e60902e0 = 0x20;
  _DAT_ram_e60001dc = 0x3c;
  _DAT_ram_e6090424 = 0;
  _DAT_ram_e6090428 = 0;
  _DAT_ram_e609042c = 0;
  _DAT_ram_e6090268 = 0x2000;
  _DAT_ram_e6090528 = 0xc0;
  _DAT_ram_e609043c = &DAT_ram_00389680;
  _DAT_ram_e60905d8 = 0xc0;
  _DAT_ram_e6090578 = 0x8000;
  FUN_ram_0015b2a4(1,s_BB_Init_ram_001cb06c);
  _DAT_ram_e6090550 = 0;
  _DAT_ram_e605004c = _DAT_ram_e605004c | 0x400;
  _DAT_ram_e6050348 = 0x23b;
  _DAT_ram_e605034c = 0x194;
  _DAT_ram_e6050350 = 0xb5;
  _DAT_ram_e6050354 = 0x58;
  _DAT_ram_e6050358 = 0x23b;
  FUN_ram_00188fc0(param_1,param_2);
  FUN_ram_0018972c(param_1,param_2);
  FUN_ram_00189924(param_2,param_1);
  _DAT_ram_e609010c = 0xf;
  _DAT_ram_e601012c = 4;
  _DAT_ram_e60001f0 = 0xb;
  _DAT_ram_e6000164 = 0;
  _DAT_ram_e6000170 = 0x200;
  _DAT_ram_e600016c = 2;
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar3 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar3 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x38) == 4)) {
    _DAT_ram_e60001f4 = 0;
    _DAT_ram_e60001f8 = 0x50;
  }
  uVar3 = 1 - param_3;
  if (1 < param_3) {
    uVar3 = 0;
  }
  _DAT_ram_e6000000 =
       (uVar3 & 1) << 7 | (param_1 & 1) << 3 | 7 | ((int)(param_1 & 2) >> 1) << 6 | 0x3c00 |
       (param_2 & 3) << 0xe | 0x10000;
  _DAT_ram_e60002fc = 1;
  FUN_ram_000e4f98(2000);
  _DAT_ram_e60002fc = 0;
  _DAT_ram_e600015c = 0x7a200;
  _DAT_ram_e600011c = 4000;
  _DAT_ram_e6000120 = 1;
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar3 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar3 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = _DAT_ram_e00000bc + 0xe0000000;
  }
  if ((uVar3 == 0) || (*(int *)(uVar3 + 0x38) != 6)) {
    _DAT_ram_e60001e4 = 2;
  }
  else {
    _DAT_ram_e60001e4 = 10;
  }
  _DAT_ram_e60002b8 = 0x115;
  _DAT_ram_e60503c0 = 0x40;
  _DAT_ram_e60503c4 = 0x40;
  _DAT_ram_e60503c8 = 0;
  _DAT_ram_e60503cc = 0;
  _DAT_ram_e60503d0 = 0x40;
  _DAT_ram_e60503d4 = 0x40;
  _DAT_ram_e60503d8 = 0x40;
  _DAT_ram_e60503dc = 0;
  _DAT_ram_e60503e0 = 0;
  _DAT_ram_e60503e4 = 0x40;
  _DAT_ram_e60503e8 = 0x40;
  _DAT_ram_e60503ec = 0x40;
  _DAT_ram_e60503f0 = 0;
  _DAT_ram_e60503f4 = 0;
  _DAT_ram_e60503f8 = 0x40;
  _DAT_ram_e60503fc = 0x40;
  _DAT_ram_e6050360 = 0x40;
  _DAT_ram_e6050364 = 0x40;
  _DAT_ram_e6050368 = 0x40;
  _DAT_ram_e605036c = 0x40;
  _DAT_ram_e6050370 = 0x2e;
  _DAT_ram_e6050374 = 0x2e;
  _DAT_ram_e6050378 = 0x2e;
  _DAT_ram_e605037c = 0x2e;
  _DAT_ram_e6050380 = 0x2e;
  _DAT_ram_e6050384 = 0x5b00;
  _DAT_ram_e6050388 = 0xd3;
  _DAT_ram_e605038c = 0x1a500;
  _DAT_ram_e6050390 = 0x25;
  _DAT_ram_e6050394 = 0x25;
  _DAT_ram_e6050398 = 0x25;
  _DAT_ram_e605039c = 0x25;
  _DAT_ram_e60503a0 = 0x25;
  _DAT_ram_e60503a4 = 0x4a00;
  _DAT_ram_e60503a8 = 0xdb;
  _DAT_ram_e60503ac = 0x1b600;
  _DAT_ram_e60503b0 = 0x25;
  _DAT_ram_e60503b4 = 0xdb;
  _DAT_ram_e60503b8 = 0x25;
  _DAT_ram_e60503bc = 0xdb;
  if (DAT_ram_8002c8bc == '\x03') {
    _DAT_ram_e6090544 = _DAT_ram_e6090544 | 0x4000000;
  }
  _DAT_ram_e60900e4 = 4;
  _DAT_ram_e6090274 = 0x12;
  _DAT_ram_e60002f8 = 500;
  _DAT_ram_e6090180 = 0;
  _DAT_ram_e6090184 = 0xff;
  _DAT_ram_e6090188 = 0xea;
  _DAT_ram_e609018c = 0xd7;
  _DAT_ram_e6090190 = 0xc5;
  _DAT_ram_e6090194 = 0xb5;
  _DAT_ram_e6090198 = 0xa6;
  _DAT_ram_e609019c = 0x98;
  _DAT_ram_e60901a0 = 0x8b;
  _DAT_ram_e6000284 = 0;
  _DAT_ram_e6000288 = 0;
  _DAT_ram_e600028c = 0;
  _DAT_ram_e6000290 = 0;
  _DAT_ram_e6000294 = 0;
  _DAT_ram_e6000298 = 0;
  _DAT_ram_e600029c = 0;
  if (DAT_ram_0018c010 == 3) {
    _DAT_ram_e6090218 = 0x16;
    _DAT_ram_e60900e4 = 5;
  }
  FUN_ram_00183f04();
  _DAT_ram_e60f000c = 0x84;
  _DAT_ram_e6091080 = 10;
  _DAT_ram_e6090530 = _DAT_ram_e6090530 | 3;
  _DAT_ram_e6091584 = 1;
  return 0;
}


