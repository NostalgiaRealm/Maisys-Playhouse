
/* ==== __break @ 0044a8ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a8ce-0044a8ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


