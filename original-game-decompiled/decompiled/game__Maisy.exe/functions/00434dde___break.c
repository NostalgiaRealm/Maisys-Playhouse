
/* ==== __break @ 00434dde ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00434dde-00434dde
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


