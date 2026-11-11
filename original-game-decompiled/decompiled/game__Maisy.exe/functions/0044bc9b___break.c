
/* ==== __break @ 0044bc9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bc9b-0044bc9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


