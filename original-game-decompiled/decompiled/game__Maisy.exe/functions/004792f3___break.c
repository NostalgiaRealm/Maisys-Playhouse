
/* ==== __break @ 004792f3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004792f3-004792f3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


