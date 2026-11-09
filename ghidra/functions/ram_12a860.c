/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012a860 */

/* WARNING: Removing unreachable block (ram,0x0012a81c) */
/* WARNING: Removing unreachable block (ram,0x0012a828) */

void thunk_FUN_ram_0012a654(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_000e3a74(param_2);
  *(int *)(param_1 + 0x4ec) = iVar2;
  cVar1 = *(char *)(param_1 + 0x4ea);
  if ((*(byte *)(param_1 + 0x408) < 2) || (*(byte *)(param_1 + 0x408) != 2)) {
    *(int *)(param_1 + 0x4f4) = iVar2;
    *(int *)(param_1 + 0x4f8) = iVar2 + 0x300;
    *(int *)(param_1 + 0x4fc) = iVar2 + 0x900;
    *(int *)(param_1 + 0x500) = iVar2 + 0xf00;
  }
  else {
    *(int *)(param_1 + 0x4f4) = iVar2;
    if (cVar1 == '\x01') {
      *(int *)(param_1 + 0x4f8) = iVar2 + 0x700;
      *(int *)(param_1 + 0x4fc) = iVar2 + 0x1500;
      *(int *)(param_1 + 0x500) = iVar2 + 0x2100;
    }
    else {
      *(int *)(param_1 + 0x4f8) = iVar2 + 0x380;
      *(int *)(param_1 + 0x4fc) = iVar2 + 0xa80;
      *(int *)(param_1 + 0x500) = iVar2 + 0x1080;
    }
  }
  *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) >> 6;
  *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) >> 6;
  *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) >> 6;
  *(uint *)(param_1 + 0x500) = *(uint *)(param_1 + 0x500) >> 6;
  if (*(char *)(param_1 + 0x408) == '\x02') {
    if (cVar1 != '\x01') {
      *(int *)(param_1 + 0x504) = iVar2 + 0x200;
      *(int *)(param_1 + 0x508) = iVar2 + 0x780;
      goto LAB_ram_0012a7ac;
    }
    iVar3 = iVar2 + 0xf00;
    *(int *)(param_1 + 0x504) = iVar2 + 0x400;
  }
  else {
    *(int *)(param_1 + 0x504) = iVar2;
    iVar3 = iVar2 + 0x300;
  }
  *(int *)(param_1 + 0x508) = iVar3;
LAB_ram_0012a7ac:
  *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) >> 6;
  *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) >> 6;
  if (*(char *)(param_1 + 0x408) == '\0') {
    *(int *)(param_1 + 0x50c) = iVar2;
    iVar3 = iVar2 + 0x300;
  }
  else if (*(char *)(param_1 + 0x408) == '\x02') {
    if (cVar1 == '\x01') {
      iVar3 = iVar2 + 0x1300;
      *(int *)(param_1 + 0x50c) = iVar2 + 0x600;
    }
    else {
      iVar3 = iVar2 + 0x980;
      *(int *)(param_1 + 0x50c) = iVar2 + 0x300;
    }
  }
  else {
    *(int *)(param_1 + 0x50c) = iVar2 + 0x200;
    iVar3 = iVar2 + 0x700;
  }
  *(int *)(param_1 + 0x510) = iVar3;
  *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) >> 6;
  *(uint *)(param_1 + 0x510) = *(uint *)(param_1 + 0x510) >> 6;
  *(undefined1 *)(param_1 + 0x4eb) = 0;
  return;
}


