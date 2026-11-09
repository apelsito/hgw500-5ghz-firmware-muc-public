/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f7e10 */

void FUN_ram_000f7e10(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = STATUS32;
  if ((uVar3 & 2) != 0) {
    STATUS32 = uVar3 & 0xfffffffd;
  }
  puVar1 = (uint *)*param_1;
  do {
    if (puVar1 == (uint *)0x0) {
      STATUS32 = uVar3;
      return;
    }
    puVar4 = (uint *)puVar1[7];
    STATUS32 = uVar3;
    if ((puVar1[6] & 0xfffff000) == 0) {
LAB_ram_000f7ed0:
      uVar3 = STATUS32;
      if ((uVar3 & 2) != 0) {
        STATUS32 = uVar3 & 0xfffffffd;
      }
      if (puVar1[7] == 0) {
        param_1[1] = puVar1[8];
      }
      else {
        *(uint *)(puVar1[7] + 0x20) = puVar1[8];
      }
      iVar2 = param_1[2];
      *(uint *)puVar1[8] = puVar1[7];
      param_1[2] = iVar2 + -1;
      puVar1[7] = 0;
      puVar1[8] = (uint)DAT_ram_8002c210;
      *DAT_ram_8002c210 = (uint)puVar1;
      DAT_ram_8002c214 = DAT_ram_8002c214 + 1;
      STATUS32 = uVar3;
      DAT_ram_8002c210 = puVar1 + 7;
    }
    else if (-1 < (int)(DAT_ram_80038ee0 - *puVar1)) {
      (*(code *)puVar1[2])(puVar1[3],puVar1[4]);
      if ((puVar1[6] & 1) == 0) {
        puVar1[6] = 0;
      }
      else {
        uVar3 = *puVar1;
        *puVar1 = puVar1[5] + uVar3;
        puVar1[1] = puVar1[1] + (uint)CARRY4(puVar1[5],uVar3);
        if ((puVar1[6] & 0xfffff000) != 0) goto LAB_ram_000f7f24;
      }
      goto LAB_ram_000f7ed0;
    }
LAB_ram_000f7f24:
    uVar3 = STATUS32;
    puVar1 = puVar4;
    if ((uVar3 & 2) != 0) {
      STATUS32 = uVar3 & 0xfffffffd;
    }
  } while( true );
}


