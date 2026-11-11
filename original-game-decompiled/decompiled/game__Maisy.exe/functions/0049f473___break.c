
/* ==== __break @ 0049f473 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f473-0049f473
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


