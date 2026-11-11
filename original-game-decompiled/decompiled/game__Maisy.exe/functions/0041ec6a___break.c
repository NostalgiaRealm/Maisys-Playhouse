
/* ==== __break @ 0041ec6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ec6a-0041ec6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


