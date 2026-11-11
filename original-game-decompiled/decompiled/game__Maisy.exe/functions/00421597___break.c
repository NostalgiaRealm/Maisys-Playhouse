
/* ==== __break @ 00421597 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00421597-00421597
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


