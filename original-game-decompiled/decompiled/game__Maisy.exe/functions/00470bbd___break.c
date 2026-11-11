
/* ==== __break @ 00470bbd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bbd-00470bbd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


