/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00149fdc */

void FUN_ram_00149fdc(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = DAT_ram_8002c240;
  uVar3 = DAT_ram_8002c23c;
  uVar2 = DAT_ram_8002c238;
  uVar1 = DAT_ram_8002c234;
  uVar5 = DAT_ram_8002c260 / 0xfa;
  if (DAT_ram_8002c934 == '\0') {
    if (DAT_ram_8002c244 < DAT_ram_8002c248) {
      uVar6 = DAT_ram_8002c248 - DAT_ram_8002c244;
      if (DAT_ram_8002c240 < DAT_ram_8002c244) {
        uVar7 = DAT_ram_8002c244 - DAT_ram_8002c240;
        if (DAT_ram_8002c240 <= uVar5) goto joined_r0x0014a0ac;
      }
      else {
        uVar7 = 0;
        if (DAT_ram_8002c240 <= uVar5) {
          uVar5 = 0;
          goto joined_r0x0014a0dc;
        }
      }
    }
    else {
      uVar6 = 0;
      if (DAT_ram_8002c244 <= DAT_ram_8002c240) {
        if (uVar5 < DAT_ram_8002c240) {
          uVar5 = DAT_ram_8002c240 - uVar5;
          uVar7 = 0;
          goto joined_r0x0014a0dc;
        }
        goto LAB_ram_0014a0c8;
      }
      uVar7 = DAT_ram_8002c244 - DAT_ram_8002c240;
      if (DAT_ram_8002c240 <= uVar5) goto joined_r0x0014a0cc;
    }
    uVar5 = DAT_ram_8002c240 - uVar5;
  }
  else {
    if (DAT_ram_8002c244 < DAT_ram_8002c248) {
      uVar6 = DAT_ram_8002c248 - DAT_ram_8002c244;
      if (DAT_ram_8002c240 < DAT_ram_8002c244) {
        uVar7 = DAT_ram_8002c244 - DAT_ram_8002c240;
      }
      else {
        uVar7 = 0;
      }
joined_r0x0014a0ac:
      uVar5 = 0;
      goto joined_r0x0014a0dc;
    }
    if (DAT_ram_8002c240 < DAT_ram_8002c244) {
      uVar7 = DAT_ram_8002c244 - DAT_ram_8002c240;
    }
    else {
LAB_ram_0014a0c8:
      uVar7 = 0;
    }
joined_r0x0014a0cc:
    uVar6 = 0;
    uVar5 = 0;
  }
joined_r0x0014a0dc:
  if ((DAT_ram_8002c258 < DAT_ram_8002c254 * 100) &&
     (DAT_ram_8002c254 < (uint)(DAT_ram_8002c250 * 2))) {
    uVar7 = DAT_ram_8002c24c + uVar7 + DAT_ram_8002c254;
    *param_2 = DAT_ram_8002c258 >> 2;
    param_2[2] = uVar7 >> 2;
  }
  else {
    *param_2 = DAT_ram_8002c248 >> 2;
    param_2[2] = uVar7 >> 2;
  }
  param_2[1] = uVar4 >> 2;
  param_2[4] = uVar5 >> 2;
  param_2[3] = uVar6 >> 2;
  param_2[5] = uVar1 >> 2;
  param_2[6] = uVar2 >> 2;
  param_2[7] = uVar3 >> 2;
  return;
}


