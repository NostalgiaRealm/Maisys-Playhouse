
/* ==== __break @ 0049381f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049381f-0049381f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


