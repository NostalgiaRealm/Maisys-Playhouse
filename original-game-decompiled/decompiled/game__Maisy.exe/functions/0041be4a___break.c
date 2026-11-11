
/* ==== __break @ 0041be4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be4a-0041be4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


