
/* ==== __break @ 00434ddd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00434ddd-00434ddd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


