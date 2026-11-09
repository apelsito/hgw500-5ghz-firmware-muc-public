/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016e268 */

undefined2 FUN_ram_0016e268(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined *in_r4;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint in_r9;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int in_lp_count;
  int iVar9;
  char in_is_in_loop;
  
  uVar2 = (uint)*(ushort *)(&DAT_ram_0018c2bc + DAT_ram_0018c2f0 * 2);
  uVar1 = 0;
  if ((uVar2 < 0x201) || (0x2ff < uVar2)) {
    if (((DAT_ram_0018c3dd != '\x02') && ((&DAT_ram_00214398)[DAT_ram_0018c2f0 * 0x1c] != '\x05'))
       || ((uVar2 < 0x504 && (DAT_ram_0018c2f8 < &UNK_auxregs_0504)))) {
      if (((DAT_ram_0018c3dd == '\x01') ||
          (in_r9 = (uint)(byte)(&DAT_ram_00214398)[DAT_ram_0018c2f0 * 0x1c], in_r9 == 4)) &&
         ((0x4ff < uVar2 || (&UNK_auxregs_0500 <= DAT_ram_0018c2f8)))) {
        in_r4 = &DAT_ram_00192e3c;
        uVar7 = (uint)*(ushort *)(DAT_ram_0018c2f0 * 500 + 0x192f6a);
        in_lp_count = 9;
        uVar2 = uVar7 - param_1;
        if (-1 < (int)uVar2) {
          in_r9 = uVar2;
        }
        if (-1 >= (int)uVar2) {
          in_r9 = param_1 - uVar7;
        }
        uVar1 = 0;
        LP_START = 0x16e448;
        LP_END = 0x16e480;
        in_is_in_loop = '\x01';
        uVar7 = DAT_ram_0018c2f0 * 500 + 0x136;
        goto LAB_ram_0016e448;
      }
      return 0;
    }
    in_r9 = (uint)*(ushort *)(DAT_ram_0018c2f0 * 500 + 0x192fce);
    uVar1 = 0;
    iVar4 = in_r9 - param_1;
    if (iVar4 < 0) {
      iVar4 = param_1 - in_r9;
    }
    iVar9 = 9;
    LP_START = 0x16e3b0;
    LP_END = 0x16e3e8;
    puVar3 = (undefined *)(DAT_ram_0018c2f0 * 500 + 0x19a);
    do {
      uVar2 = (uint)*(ushort *)(puVar3 + 0x192e3e);
      in_r4 = puVar3 + 10;
      if (uVar2 != 0) {
        iVar5 = uVar2 - param_1;
        if (iVar5 < 0) {
          iVar5 = param_1 - uVar2;
        }
        if (iVar5 <= iVar4) {
          uVar1 = *(undefined2 *)(puVar3 + 0x192e42);
          iVar4 = iVar5;
        }
      }
      iVar9 = iVar9 + -1;
      puVar3 = in_r4;
    } while (iVar9 != 0);
    in_is_in_loop = '\0';
    in_lp_count = 0;
LAB_ram_0016e480:
    while ((in_is_in_loop != '\0' &&
           (in_lp_count = in_lp_count + -1, uVar7 = uVar2, in_lp_count != 0))) {
LAB_ram_0016e448:
      uVar8 = (uint)*(ushort *)(in_r4 + uVar7 + 2);
      uVar2 = uVar7 + 10;
      if (uVar8 != 0) {
        uVar6 = uVar8 - param_1;
        if ((int)uVar6 < 0) {
          uVar6 = param_1 - uVar8;
        }
        if ((int)uVar6 <= (int)in_r9) {
          uVar1 = *(undefined2 *)(in_r4 + uVar7 + 6);
          in_r9 = uVar6;
        }
      }
    }
    return uVar1;
  }
  if ((0x21 < param_1) && (param_1 < 0x44)) goto LAB_ram_0016e480;
  if ((99 < param_1) && (param_1 < 0x78)) {
    return 1;
  }
  if (param_1 < 0x78) {
    if (param_1 < 0x8c) goto LAB_ram_0016e304;
  }
  else if (param_1 < 0x8c) {
    return 2;
  }
  if (param_1 < 0xa0) {
    return 3;
  }
LAB_ram_0016e304:
  if (param_1 < 0xa0) {
    if (param_1 < 0xb4) {
      return 0xff;
    }
  }
  else if (param_1 < 0xb4) {
    return 4;
  }
  if (199 < param_1) {
    return 0xff;
  }
  return 5;
}


