
/* ==== __break @ 1401af9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9f-1401af9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


