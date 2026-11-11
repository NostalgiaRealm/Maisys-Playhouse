
/* ==== __break @ 00434ddf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00434ddf-00434ddf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


