
/* ==== __break @ 004696bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004696bb-004696bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


