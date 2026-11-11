
/* ==== __break @ 0041c879 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041c879-0041c879
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


