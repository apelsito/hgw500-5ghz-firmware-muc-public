/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011d354 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0011d354(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = *(int *)(param_1 + 0x3da4);
  cVar2 = *(char *)(param_1 + 0x39e8);
  uVar5 = 0;
  if (iVar3 == 0) {
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
LAB_ram_0011d450:
    uVar4 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 0;
LAB_ram_0011d39c:
    do {
      if (*(short *)(iVar3 + 0x18) != 0) {
        uVar5 = uVar5 + 1 & 0xff;
        if ((*(uint *)(iVar3 + 0x38c) & 0x800) == 0) {
          if (*(char *)(iVar3 + 100) != '\0') {
            uVar8 = uVar8 + 1 & 0xff;
          }
        }
        else {
          if ((*(ushort *)(iVar3 + 0xc) & 0x4000) == 0) {
            if ((*(short *)(iVar3 + 0x3c0) != 10) || ((*(ushort *)(iVar3 + 0xc) & 8) == 0))
            goto LAB_ram_0011d430;
            uVar6 = uVar6 + 1 & 0xffff;
          }
          else {
            uVar7 = uVar7 + 1 & 0xffff;
          }
          if (cVar2 != '\0') {
            DAT_ram_8002c228 = 0;
            FUN_ram_0011b9f4(iVar3,1);
            _DAT_ram_e6090578 = &DAT_ram_00389680;
            cVar2 = *(char *)(param_1 + 0x39e8);
            iVar3 = *(int *)(iVar3 + 0xd60);
            if (iVar3 == 0) break;
            goto LAB_ram_0011d39c;
          }
        }
      }
LAB_ram_0011d430:
      iVar3 = *(int *)(iVar3 + 0xd60);
    } while (iVar3 != 0);
    if (((cVar2 == '\0') || (uVar5 == 0)) || (uVar6 + uVar7 < uVar5)) goto LAB_ram_0011d450;
    uVar4 = 1;
  }
  if (uVar4 == DAT_ram_8002c934) {
    if (uVar5 == 0) {
      if (DAT_ram_0018c176 == '\0') {
        return;
      }
      FUN_ram_00158af8(0xa0000000);
      DAT_ram_0018c176 = 0;
      return;
    }
joined_r0x0011d504:
    if (uVar5 <= uVar6 + uVar7 + uVar8) {
      if (DAT_ram_0018c176 == '\x01') {
        return;
      }
      uVar5 = 1;
      goto LAB_ram_0011d530;
    }
  }
  else {
    uVar1 = 0;
    if (uVar4 == 0) {
      uVar1 = (uint)DAT_ram_8002c935;
    }
    FUN_ram_00158af8(uVar1 | 0x10000000);
    FUN_ram_00158af8(uVar4 | 0xb0000000);
    DAT_ram_8002c934 = (byte)uVar4;
    FUN_ram_0015cc94(param_1,0);
    if (uVar5 != 0) goto joined_r0x0011d504;
  }
  if (DAT_ram_0018c176 == '\0') {
    return;
  }
  uVar5 = 0;
LAB_ram_0011d530:
  FUN_ram_00158af8(uVar5 | 0xa0000000);
  DAT_ram_0018c176 = (char)uVar5;
  return;
}


