
/* ==== __break @ 004100ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004100ad-004100ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


