
/* ==== __break @ 00414dec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00414dec-00414dec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


