
/* ==== __break @ 1401af9c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9c-1401af9c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


