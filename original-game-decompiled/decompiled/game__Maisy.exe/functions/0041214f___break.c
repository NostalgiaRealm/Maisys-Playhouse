
/* ==== __break @ 0041214f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041214f-0041214f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


