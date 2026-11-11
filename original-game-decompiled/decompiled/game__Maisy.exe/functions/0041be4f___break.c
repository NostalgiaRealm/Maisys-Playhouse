
/* ==== __break @ 0041be4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be4f-0041be4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


