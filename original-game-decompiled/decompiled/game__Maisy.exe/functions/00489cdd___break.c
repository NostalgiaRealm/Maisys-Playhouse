
/* ==== __break @ 00489cdd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489cdd-00489cdd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


