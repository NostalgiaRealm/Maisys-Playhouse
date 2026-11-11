
/* ==== __break @ 00493f3b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493f3b-00493f3b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


