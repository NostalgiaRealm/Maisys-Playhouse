
/* ==== __break @ 0044a00b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a00b-0044a00b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


