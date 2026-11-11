
/* ==== __break @ 0044634b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044634b-0044634b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


