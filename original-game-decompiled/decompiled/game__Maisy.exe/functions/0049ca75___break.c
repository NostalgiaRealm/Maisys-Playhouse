
/* ==== __break @ 0049ca75 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ca75-0049ca75
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


