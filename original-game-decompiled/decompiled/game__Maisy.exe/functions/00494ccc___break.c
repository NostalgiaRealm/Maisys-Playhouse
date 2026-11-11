
/* ==== __break @ 00494ccc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494ccc-00494ccc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


