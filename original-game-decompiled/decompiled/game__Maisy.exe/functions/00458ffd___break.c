
/* ==== __break @ 00458ffd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458ffd-00458ffd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


