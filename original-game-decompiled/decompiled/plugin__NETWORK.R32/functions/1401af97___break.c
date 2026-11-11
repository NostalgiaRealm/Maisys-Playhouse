
/* ==== __break @ 1401af97 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af97-1401af97
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


