
/* ==== __break @ 0045bee9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bee9-0045bee9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


