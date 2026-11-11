
/* ==== __break @ 0040ddef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040ddef-0040ddef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


