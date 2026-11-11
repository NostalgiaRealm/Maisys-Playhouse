
/* ==== __break @ 0049289b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049289b-0049289b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


