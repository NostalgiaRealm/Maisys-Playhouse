
/* ==== __break @ 0041ecb9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ecb9-0041ecb9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


