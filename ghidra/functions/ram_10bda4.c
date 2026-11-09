/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010bda4 */

void FUN_ram_0010bda4(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x1e;
  LP_START = 0x10bdb8;
  LP_END = 0x10bdd0;
  do {
    iVar1 = iVar2 * 0x14;
    if (param_1 == (&DAT_ram_0018cd8c)[iVar2 * 5]) {
      if (param_2 == 0x28) {
        *param_5 = *(int *)(iVar1 + 0x18cd94);
        *param_4 = *(undefined4 *)(iVar1 + 0x18cd90);
      }
      else {
        *param_5 = *(int *)(iVar1 + 0x18cd98);
        *param_4 = *(undefined4 *)(iVar1 + 0x18cd9c);
      }
      break;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar2 = 0;
  iVar3 = 0x12;
  LP_START = 0x10be10;
  LP_END = 0x10be34;
  do {
    if (param_1 == (&DAT_ram_0018cfe4)[iVar2 * 5]) {
      if (param_2 != 0x28) {
        *param_5 = param_1;
        *param_4 = 0;
        return;
      }
      if (param_3 == (&DAT_ram_0018cfe8)[iVar2 * 5]) {
        *param_5 = *(int *)(iVar2 * 0x14 + 0x18cfec);
        *param_4 = (&DAT_ram_0018cfe8)[iVar2 * 5];
        return;
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}


