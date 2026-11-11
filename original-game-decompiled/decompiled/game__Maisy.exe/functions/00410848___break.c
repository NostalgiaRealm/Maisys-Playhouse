
/* ==== __break @ 00410848 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410848-00410848
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


