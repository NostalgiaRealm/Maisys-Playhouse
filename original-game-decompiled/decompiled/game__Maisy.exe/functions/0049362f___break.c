
/* ==== __break @ 0049362f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049362f-0049362f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


