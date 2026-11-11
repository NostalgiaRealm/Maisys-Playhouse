
/* ==== __break @ 00494cce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494cce-00494cce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


