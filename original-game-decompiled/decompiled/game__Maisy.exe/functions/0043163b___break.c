
/* ==== __break @ 0043163b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043163b-0043163b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


